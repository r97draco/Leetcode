<ul>
  {% for file in site.static_files %}
    {% if file.path contains 'cpp' %}
      <li>
        <a href="{{ file.path }}">{{ file.name }}</a>
      </li>
    {% endif %}
  {% endfor %}
</ul>
