<!DOCTYPE html>
<html lang="ru">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Дополнительное задание по верстке</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            line-height: 1.6;
            padding: 20px;
            transition: background-color 0.5s, color 0.5s;
        }

        .dark-theme {
            background-color: #333;
            color: #fff;
        }

        .light-theme {
            background-color: #f5f5f5;
            color: #333;
        }

        .container {
            max-width: 800px;
            margin: 0 auto;
        }

        h1, h2 {
            color: #2c3e50;
        }

        .dark-theme h1, .dark-theme h2 {
            color: #ecf0f1;
        }

        .logical-op {
            margin: 15px 0;
        }

        .and { color: #e74c3c; }
        .or { color: #3498db; }
        .xor { color: #2ecc71; }
        .not { color: #f39c12; }

        .prime {
            font-weight: bold;
            color: #9b59b6;
        }

        .string-operations {
            background-color: #ecf0f1;
            padding: 15px;
            border-radius: 5px;
            margin: 15px 0;
        }

        .dark-theme .string-operations {
            background-color: #444;
        }

        .slide-show {
            width: 500px;
            height: 300px;
            margin: 20px auto;
            position: relative;
            overflow: hidden;
            border: 2px solid #3498db;
            border-radius: 5px;
        }

        .slide {
            width: 100%;
            height: 100%;
            position: absolute;
            top: 0;
            left: 0;
            opacity: 0;
            transition: opacity 1s;
            object-fit: cover;
        }

        .slide.active {
            opacity: 1;
        }

        .pairs-list {
            list-style-type: square;
            padding-left: 20px;
        }

        .math-result {
            font-style: italic;
            color: #16a085;
        }
    </style>
</head>
<body class="<?php echo date('H') > 18 || date('H') < 6 ? 'dark-theme' : 'light-theme'; ?>">
    <div class="container">
        <h1>Дополнительное задание по верстке</h1>
        
        <!-- Задание 1.1: Логические операции -->
        <h2>1.1 Логические операции для чисел 7 и 3</h2>
        <?php
        $a = 7;
        $b = 3;
        ?>
        <div class="logical-op">
            <span class="and"><?php echo "$a & $b = " . ($a & $b); ?></span><br>
            <span class="or"><?php echo "$a | $b = " . ($a | $b); ?></span><br>
            <span class="xor"><?php echo "$a ^ $b = " . ($a ^ $b); ?></span><br>
            <span class="not"><?php echo "~$a = " . ~$a; ?></span>
        </div>

        <!-- Задание 1.2: Пары на сегодня -->
        <h2>1.2 Пары на сегодня (<?php echo date('d.m.Y'); ?>)</h2>
        <ul class="pairs-list">
            <li>09:00 - 10:30: Математика</li>
            <li>10:40 - 12:10: Физика</li>
            <li>12:20 - 13:50: Программирование</li>
            <li>14:30 - 16:00: Веб-дизайн</li>
        </ul>

        <!-- Задание 1.3: Сложение строк -->
        <h2>1.3 Сложение строк</h2>
        <?php
        $str1 = "Привет, ";
        $str2 = "мир!";
        $result = $str1 . $str2;
        echo "<p>Результат: $result</p>";
        ?>

        <!-- Задание 1.4: Проверка на простое число -->
        <h2>1.4 Проверка числа на простоту</h2>
        <?php
        $num = 17;
        $isPrime = true;
        
        if ($num <= 1) {
            $isPrime = false;
        } else {
            for ($i = 2; $i <= sqrt($num); $i++) {
                if ($num % $i == 0) {
                    $isPrime = false;
                    break;
                }
            }
        }
        
        echo "<p>Число $num <span class='prime'>" . ($isPrime ? "является" : "не является") . " простым</span></p>";
        ?>

        <!-- Задание 1.5: Операции со строкой -->
        <h2>1.5 Операции со строкой</h2>
        <?php
        $string = "  <b>Пример</b> строки с пробелами  ";
        $string2 = "Другая строка для сравнения";
        ?>
        <div class="string-operations">
            <p>Исходная строка: "<?php echo $string; ?>"</p>
            <p>Длина строки: <?php echo strlen($string); ?></p>
            <p>Без пробелов по краям: "<?php echo trim($string); ?>"</p>
            <p>Позиция символа 'с': <?php echo strpos($string, 'с'); ?></p>
            <p>Без HTML-тегов: "<?php echo strip_tags($string); ?>"</p>
            <p>Перевернутая строка: "<?php echo strrev($string); ?>"</p>
            <p>Сравнение строк: "<?php echo strcmp($string, $string2); ?>"</p>
            <p>Верхний регистр: "<?php echo strtoupper($string); ?>"</p>
            <p>Нижний регистр: "<?php echo strtolower($string); ?>"</p>
            <p>Замена подстроки: "<?php echo str_replace("Пример", "Тест", $string); ?>"</p>
        </div>

        <!-- Задание 1.6: Тема в зависимости от времени суток -->
        <h2>1.6 Тема страницы</h2>
        <p>Сейчас <?php echo date('H:i'); ?>, используется <?php echo date('H') > 18 || date('H') < 6 ? 'темная' : 'светлая'; ?> тема.</p>

        <!-- Задание 1.7: Вычисление функции -->
        <h2>1.7 Вычисление функции</h2>
        <?php
        $a = 5;
        $b = 3;
        $c = 2;
        
        $y = ($a - $c - pow($c, 2)) / (($a + 2) * ($b + 4)) - (3 * $a);
        echo "<p class='math-result'>Результат вычисления функции: y = $y</p>";
        ?>

        <!-- Задание 1.8: Математические функции -->
        <h2>1.8 Математические функции</h2>
        <?php
        $numbers = [5, 12, 8, 3, 15, 7];
        $octal = '12';
        ?>
        <ul>
            <li>Число ПИ: <?php echo pi(); ?></li>
            <li>Максимальное число из [<?php echo implode(', ', $numbers); ?>]: <?php echo max($numbers); ?></li>
            <li>Минимальное число из [<?php echo implode(', ', $numbers); ?>]: <?php echo min($numbers); ?></li>
            <li>Квадратный корень из 16: <?php echo sqrt(16); ?></li>
            <li>Модуль -5: <?php echo abs(-5); ?></li>
            <li>Округление 3.7: <?php echo round(3.7); ?></li>
            <li>Восьмеричное '<?php echo $octal; ?>' в десятичное: <?php echo octdec($octal); ?></li>
        </ul>

        <!-- Задание 1.9: Слайд-шоу -->
        <h2>1.9 Слайд-шоу</h2>
        <div class="slide-show">
            <img src="https://picsum.photos/500/300?random=1" class="slide active" alt="Slide 1">
            <img src="https://picsum.photos/500/300?random=2" class="slide" alt="Slide 2">
            <img src="https://picsum.photos/500/300?random=3" class="slide" alt="Slide 3">
            <img src="https://picsum.photos/500/300?random=4" class="slide" alt="Slide 4">
        </div>

        <script>
            // Скрипт для слайд-шоу
            let currentSlide = 0;
            const slides = document.querySelectorAll('.slide');
            
            function showSlide() {
                slides.forEach(slide => slide.classList.remove('active'));
                currentSlide = (currentSlide + 1) % slides.length;
                slides[currentSlide].classList.add('active');
            }
            
            setInterval(showSlide, 3000);
        </script>
    </div>
</body>
</html>
